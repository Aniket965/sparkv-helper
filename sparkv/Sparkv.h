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
  private:
    void motionSet(unsigned char);
};

#endif