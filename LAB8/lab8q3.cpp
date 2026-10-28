#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) {
        cout << "Original file size: " << fileSize << endl;
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.4;
        cout << "Original: " << fileSize << ", Compressed Text: " << compressedSize << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.7;
        cout << "Original: " << fileSize << ", Compressed Image: " << compressedSize << endl;
    }
};

int main() {
    Compressor* c1 = new TextCompressor();
    Compressor* c2 = new ImageCompressor();

    c1->compress(100.0);
    c2->compress(100.0);

    delete c1;
    delete c2;
    return 0;
}