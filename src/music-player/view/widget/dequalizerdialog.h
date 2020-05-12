#ifndef DEQUALIZERDIALOG_H
#define DEQUALIZERDIALOG_H
#include <DAbstractDialog>
#include "../core/musicsettings.h"
#include "vlc/Equalizer.h"

class DequalizerDialogPrivate;
class DequalizerDialog: public Dtk::Widget::DAbstractDialog
{
    Q_OBJECT
public:
    explicit DequalizerDialog(QWidget *parent = Q_NULLPTR);
    ~DequalizerDialog();

    void setMediaPlayer(VlcMediaPlayer *mediaPlayer);

signals:
    void entered();

public Q_SLOTS:
//    void updateSettings(DTK_CORE_NAMESPACE::DSettings *settings);
//    void updateSettings(const QByteArray &translateContext, DTK_CORE_NAMESPACE::DSettings *settings);

private:
    QScopedPointer<DequalizerDialogPrivate> d_ptr;
    Q_DECLARE_PRIVATE_D(qGetPtrHelper(d_ptr), DequalizerDialog)

private:
    VlcMediaPlayer *_mediaPlayer;
    VlcEqualizer *_vlcEqualizer;

};

#endif // DEQUALIZERDIALOG_H