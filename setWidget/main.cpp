#include "setwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	setWidget w;
	w.show();
	return a.exec();
}
