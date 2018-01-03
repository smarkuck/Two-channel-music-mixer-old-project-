#ifndef SOUNDPROCESSING_H
#define SOUNDPROCESSING_H

#include <QObject>
#include <QThread>
#include <QCoreApplication>

#include <QTimer>

#include <QAudioFormat>
#include <QAudioBuffer>
#include <QAudioOutput>

#include <mixpanel.h>
#include <action.h>

class SoundProcessing : public QObject
{
    Q_OBJECT
    Q_ENUMS(Actions)

public:
    explicit SoundProcessing(QObject *parent = nullptr);
    void writeWavHeader( QFile * file );
    bool abort;

    int crossFader;

    MixPanel panel1;
    MixPanel panel2;

    Action action;

    enum Actions { white_noise_true = 1, white_noise_false, low, med, high, cross};


    double buffer1[256], buffer2[256];

private:
    QAudioOutput *audioOutput;
    QIODevice *audioDevice;

    QTimer* timer;

    QByteArray output1;
    QAudioFormat format;

    double rate;

signals:
    void lowEQChange(int value);
    void medEQChange(int value);
    void highEQChange(int value);
    void crossChange(int value);
    void startDownload(QString filename);


public slots:
    void play();
    void download(QString filename);
};

#endif // SOUNDPROCESSING_H

