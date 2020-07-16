#include <QtCore>
#include <QApplication>
#include "wholewindow.h"

int main(int argc, char *argv[]) {

	QApplication physapp(argc, argv);

	wholewindow win;
	win.resize(800, 600);
	win.show();

	qDebug() << "Qt version: " << qVersion();
	qDebug() << "hello";

	return physapp.exec();
}