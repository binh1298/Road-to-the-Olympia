#ifndef ROADTOTHEOLYMPIA_H
#define ROADTOTHEOLYMPIA_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QAxObject>

namespace Ui {
class RoadtotheOlympia;
}

class RoadtotheOlympia : public QDialog
{
    Q_OBJECT

public:
    explicit RoadtotheOlympia(QWidget *parent = 0);
    ~RoadtotheOlympia();

private slots:
    void on_pushButton_StartTime_clicked();

    void on_pushButton_Student_1_clicked();

    void on_pushButton_Student_2_clicked();

    void on_pushButton_Student_3_clicked();

    void on_pushButton_Student_4_clicked();

private:
    Ui::RoadtotheOlympia *ui;
};

#endif // ROADTOTHEOLYMPIA_H
