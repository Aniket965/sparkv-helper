#ifndef Sparkv_h
#define Sparkv_h

class Sparkvbot {
  public:
    void buzzerPinInit();
    void buzzerOn();
    void buzzerOff(void);
    void motionPinInit();
    void motionForward(void);
    void motionBackward(void);
    void motionSoftBreak(void);
    void motionHardBreak(void);
    void motionLeft(void);
    void motionRight(void);
    void motionSoftLeft(void);
    void motionSoftRight(void);
    void motionSoftLeftV2(void);
    void motionSoftRightV2(void);
  private:
    void motionSet(unsigned char);
};

#endif