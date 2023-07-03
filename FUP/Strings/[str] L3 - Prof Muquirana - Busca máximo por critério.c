#include<stdio.h>

int main() {
    
    int i, n, id, maior_id;
    char s[102];
    float media, maior_media = -1;
    scanf("%d", & n);
    
    for(i = 0; i < n; i++) {
        scanf("%s", s);
        id = 10 * (s[0] - '0') + (s[1] - '0');
        media = ((s[2] - '0') + (s[3] - '0') + (s[4] - '0') + (s[5] - '0')) / 4.0;
        if((media > maior_media) || ((media == maior_media) && (id > maior_id))) {
            maior_media = media;
            maior_id = id;
        } 
    }
    printf("%02d", maior_id);
}
