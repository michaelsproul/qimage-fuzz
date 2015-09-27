#include <QIODevice>
#include <QImage>

#include <stdio.h>

int main(int argc, char ** argv) {
    if (argc != 2) return 1;

    QImage image;

    if (!image.load(argv[1], "JPG")) {
        printf("FUCK\n");
        return 1;
    } else {
        printf("Ok!\n");
    }
    return 0;
}
