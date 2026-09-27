#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

class Media {
protected:
    string fileName;

public:
    Media(string name) : fileName(name) {}

    virtual void play() const = 0;
    virtual void pause() const = 0;
    virtual void stop() const = 0;
    virtual void showDetails() const = 0;

    virtual ~Media() = default;
};

class Audio : public Media {
private:
    string artist;

public:
    Audio(string name, string a)
        : Media(name), artist(a) {}

    void play() const override {
        cout << "Playing Audio: "
             << fileName << endl;
    }

    void pause() const override {
        cout << "Audio Paused." << endl;
    }

    void stop() const override {
        cout << "Audio Stopped." << endl;
    }

    void showDetails() const override {
        cout << "Audio File: " << fileName << endl;
        cout << "Artist: " << artist << endl;
    }
};

class Video : public Media {
private:
    string resolution;

public:
    Video(string name, string res)
        : Media(name), resolution(res) {}

    void play() const override {
        cout << "Playing Video: "
             << fileName << endl;
    }

    void pause() const override {
        cout << "Video Paused." << endl;
    }

    void stop() const override {
        cout << "Video Stopped." << endl;
    }

    void showDetails() const override {
        cout << "Video File: " << fileName << endl;
        cout << "Resolution: "
             << resolution << endl;
    }
};

class Image : public Media {
private:
    string format;

public:
    Image(string name, string f)
        : Media(name), format(f) {}

    void play() const override {
        cout << "Displaying Image: "
             << fileName << endl;
    }

    void pause() const override {
        cout << "Image Display Paused." << endl;
    }

    void stop() const override {
        cout << "Image Display Stopped." << endl;
    }

    void showDetails() const override {
        cout << "Image File: " << fileName << endl;
        cout << "Format: " << format << endl;
    }
};

int main() {

    vector<unique_ptr<Media>> mediaList;

    mediaList.push_back(
        make_unique<Audio>(
            "song.mp3",
            "Arijit Singh"
        )
    );

    mediaList.push_back(
        make_unique<Video>(
            "movie.mp4",
            "1920x1080"
        )
    );

    mediaList.push_back(
        make_unique<Image>(
            "photo.jpg",
            "JPEG"
        )
    );

    cout << "=== Media Player ===" << endl;

    for (const auto& media : mediaList) {

        media->showDetails();

        media->play();

        media->pause();

        media->stop();

        cout << endl;
    }

    return 0;
}
