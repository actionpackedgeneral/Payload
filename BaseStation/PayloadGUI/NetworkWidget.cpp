#include "NetworkWidget.h"

NetworkWidget::NetworkWidget(QWidget *parent):
	QDockWidget(parent)
{
	setFeatures(QDockWidget::DockWidgetMovable | QDockWidget::DockWidgetFloatable); //!This sets the features of the Network widget allowing it to be movalbe and floatable.

	setWindowTitle("Network");
	setFixedSize(400,200);

	// Initialize Start Ping button
	startButton = new QPushButton("Start Ping",this);
	startButton->setGeometry(50,60,200,30);

	// Initialize Stop Ping button
	stopButton = new QPushButton("Stop Ping",this);
	stopButton->setGeometry(50,100,200,30);

}
