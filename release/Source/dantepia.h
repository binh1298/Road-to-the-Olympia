#ifndef DANTEPIA_H
#define DANTEPIA_H

#include <QMainWindow>



namespace Ui {
class DantePia;
}

class DantePia : public QMainWindow
{
    Q_OBJECT

public:
    explicit DantePia(QWidget *parent = 0);
    ~DantePia();

private slots:
    void on_pushButton_Student1_clicked();

    void on_pushButton_Student2_clicked();

    void on_pushButton_Student3_clicked();

    void on_pushButton_Student4_clicked();

    void on_pushButton_Start_clicked();

private:
    Ui::DantePia *ui;
};

#endif // DANTEPIA_H
