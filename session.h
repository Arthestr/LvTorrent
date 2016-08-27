#ifndef SESSION_H
#define SESSION_H

#include <QObject>

class Session : public QObject
{
    Q_OBJECT
public:
    explicit Session(QObject *parent = 0);

    bool AddTorrentFile(QString filePath, QString savePath);
    bool AddMagnetLink(QString magnet, QString savePath);
    bool RemoveTorrent();

signals:

public slots:
};

#endif // SESSION_H