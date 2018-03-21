#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char* argv[]) {
   sqlite3 *db = NULL;

   if(sqlite3_open("test.db", &db)) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
   }
   else {
      fprintf(stderr, "Opened database successfully\n");
   }

   sqlite3_close(db);
   return 0;
}
