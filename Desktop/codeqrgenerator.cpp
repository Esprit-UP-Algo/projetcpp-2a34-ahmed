#include "codeqrgenerator.h"
#include <QPainter>
#include <QPainterPath>
#include <QRandomGenerator>

QPixmap qrcodegenerator::generateQRCode(const QString& data, int size)
{
    if (data.isEmpty()) {
        return QPixmap();
    }

    QPixmap pixmap(size, size);
    pixmap.fill(Qt::white);

    QPainter painter(&pixmap);
    painter.setRenderHint(QPainter::Antialiasing);

    // Encoder les données en QR Code simple
    QByteArray byteData = data.toUtf8();
    encodeQRData(painter, byteData, size, 10);

    return pixmap;
}

void qrcodegenerator::encodeQRData(QPainter& painter, const QByteArray& data, int size, int margin)
{
    int dataSize = data.size();
    int gridSize = size - 2 * margin;
    int cellSize = gridSize / 20; // Grille 20x20 simplifiée

    // Dessiner les motifs de position (coins)
    painter.setBrush(Qt::black);
    painter.setPen(Qt::NoPen);

    // Coin supérieur gauche
    painter.drawRect(margin, margin, 7 * cellSize, 7 * cellSize);
    painter.setBrush(Qt::white);
    painter.drawRect(margin + cellSize, margin + cellSize, 5 * cellSize, 5 * cellSize);
    painter.setBrush(Qt::black);
    painter.drawRect(margin + 2 * cellSize, margin + 2 * cellSize, 3 * cellSize, 3 * cellSize);

    // Coin supérieur droit
    painter.drawRect(margin + 13 * cellSize, margin, 7 * cellSize, 7 * cellSize);
    painter.setBrush(Qt::white);
    painter.drawRect(margin + 14 * cellSize, margin + cellSize, 5 * cellSize, 5 * cellSize);
    painter.setBrush(Qt::black);
    painter.drawRect(margin + 15 * cellSize, margin + 2 * cellSize, 3 * cellSize, 3 * cellSize);

    // Coin inférieur gauche
    painter.drawRect(margin, margin + 13 * cellSize, 7 * cellSize, 7 * cellSize);
    painter.setBrush(Qt::white);
    painter.drawRect(margin + cellSize, margin + 14 * cellSize, 5 * cellSize, 5 * cellSize);
    painter.setBrush(Qt::black);
    painter.drawRect(margin + 2 * cellSize, margin + 15 * cellSize, 3 * cellSize, 3 * cellSize);

    // Encoder les données
    painter.setBrush(Qt::black);
    quint32 randomValue = QRandomGenerator::global()->generate();

    for (int i = 0; i < dataSize && i < 200; ++i) {
        int row = (i / 20) % 20;
        int col = i % 20;

        // Éviter les motifs de position
        if ((row < 7 && col < 7) ||
            (row < 7 && col > 12) ||
            (row > 12 && col < 7)) {
            continue;
        }

        bool isBlack = (static_cast<quint32>(data[i]) % 2) == (randomValue % 2);
        if (isBlack) {
            painter.drawRect(margin + col * cellSize,
                             margin + row * cellSize,
                             cellSize, cellSize);
        }
    }
}
