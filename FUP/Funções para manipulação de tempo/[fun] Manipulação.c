#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* dia_semana[] = {"dom", "seg", "ter", "qua", "qui", "sex", "sab"};

int main () {
   time_t ini = time(0); // Data/hora atual (segundos desde 01/01/70 00:00:00)
   printf("%u\n", (int) ini);
   printf("%s\n", ctime(&ini));
   
   struct tm *t = gmtime(&ini);
   printf("%d/%d/%d (%s) %d:%d:%d\n", 
      t->tm_mday, 
      t->tm_mon + 1, 
      t->tm_year + 1900, 
      dia_semana[t->tm_wday], 
      t->tm_hour - t->tm_isdst, 
      t->tm_min, 
      t->tm_sec);
   
   struct tm h;
   
   h.tm_year = 2017 - 1900;
   h.tm_mon = 12 - 1;
   h.tm_mday = 1;
   h.tm_hour = 0;
   h.tm_min = 0;
   h.tm_sec = 0;
   h.tm_isdst = -3;
   
   time_t ht = mktime(&h); // Data hora fornecida (segundos desde 01/01/70 00:00:00)
   printf("%s\n", ctime(&ht));
   printf("%u\n", (int) ht);
   
   // Aumentando 60 dias, corrige para uma data válida.
   h.tm_mday += 60;
   ht = mktime(&h);
   printf("%s\n", ctime(&ht));
   
   return 0;
}
