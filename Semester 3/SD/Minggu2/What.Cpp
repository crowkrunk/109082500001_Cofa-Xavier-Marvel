#include <iostream>

class Remote {
private:
    bool powerOn;
    int volume;
    int channel;

public:
    Remote() : powerOn(false), volume(0), channel(1) {}

    void power() {
        powerOn = !powerOn;
        if (powerOn) {
            std::cout << "TV ON." << std::endl;
        } else {
            std::cout << "TV OFF." << std::endl;
        }
    }

    void volumeUp() {
        if (!powerOn) {
            std::cout << "Volume Tidak mengubah . TV OFF." << std::endl;
            return;
        }
        volume++;
        if (volume > 100) volume = 100;
        std::cout << "Volume: " << volume << std::endl;
    }

    void volumeDown() {
        if (!powerOn) {
            std::cout << "Volume Tidak mengubah . TV OFF." << std::endl;
            return;
        }
        volume--;
        if (volume < 0) volume = 0;
        std::cout << "Volume: " << volume << std::endl;
    }

    void channelUp() {
        if (!powerOn) {
            std::cout << "Channel Tidak mengubah . TV OFF." << std::endl;
            return;
        }

        channel++;
        if (channel > 100) channel = 1;
        std::cout << "Channel: " << channel << std::endl;
    }

    void channelDown() {
        if (!powerOn) {
            std::cout << "Channel Tidak mengubah . TV OFF." << std::endl;
            return;
        }
        channel--;
        if (channel < 1) channel = 100;
        std::cout << "Channel: " << channel << std::endl;
    }

    void getStatus() const {
        std::cout << "TV Status:" << std::endl;
        std::cout << "  Power: " << (powerOn ? "ON" : "OFF") << std::endl;
        if (powerOn) {
            std::cout << "  Volume: " << volume << std::endl;
            std::cout << "  Channel: " << channel << std::endl;
        } else {
            std::cout << "  Layar hitam  " << std::endl;
        }
    }
};

int main() {
    Remote myRemote;

    myRemote.getStatus();

    myRemote.power();
    myRemote.channelUp();
    myRemote.channelUp();
    myRemote.channelDown();
    myRemote.channelUp();

    myRemote.getStatus();

    return 0;
}