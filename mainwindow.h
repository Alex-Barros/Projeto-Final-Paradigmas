#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
  void tcpConnect();

public slots:
  void putData();
  void mostraLCD(int value);

private slots:
  void on_pushButtonConnect_clicked();

  void on_pushButtonDisconnect_clicked();

  void on_horizontalSliderMin_valueChanged(int value);

  void on_horizontalSliderMax_valueChanged(int value);

  void on_horizontalSliderTiming_valueChanged(int value);

  void on_pushButtonStart_clicked();

  void on_pushButtonStop_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
