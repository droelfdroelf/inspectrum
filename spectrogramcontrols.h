/*
 *  Copyright (C) 2015, Mike Walters <mike@flomp.net>
 *
 *  This file is part of inspectrum.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <QDockWidget>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>
#include <QCheckBox>

class SpectrogramControls : public QDockWidget {
	Q_OBJECT

public:
	SpectrogramControls(const QString & title, QWidget * parent);

signals:
	void fftSizeChanged(int size);
	void openFile(QString fileName);

private slots:
	void fftSizeSliderChanged(int size);
	void fileOpenButtonClicked();

private:
	QWidget *widget;
	QFormLayout *layout;
public:
	QPushButton *fileOpenButton;
	QLineEdit *sampleRate;
	QSlider *fftSizeSlider;
	QSlider *zoomLevelSlider;
	QSlider *powerMaxSlider;
	QSlider *powerMinSlider;
	QCheckBox *timeScaleCheckBox;
};
