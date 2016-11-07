#ifndef SETWIDGET_H
#define SETWIDGET_H

#include <QtWidgets/QWidget>
#include "ui_setwidget.h"

class setWidget : public QWidget
{
	Q_OBJECT

public:
	setWidget(QWidget *parent = 0);
	~setWidget();

private:
	Ui::setWidgetClass ui;
};

#endif // SETWIDGET_H
