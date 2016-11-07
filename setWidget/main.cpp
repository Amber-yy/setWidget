#include "setwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	setWidget w(600,430);

	w.show();
	return a.exec();
}
