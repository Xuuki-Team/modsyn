#define SYNMOD_CHARS (128)
#define MAXMODS (256)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>

typedef struct { // OSCMOD
  char frequency[SYNMOD_CHARS];
  char sig_out[SYNMOD_CHARS];
  char sig_am[SYNMOD_CHARS];
  char sig_fm[SYNMOD_CHARS];
  char waveform[SYNMOD_CHARS];
  char omin[SYNMOD_CHARS];
  char omax[SYNMOD_CHARS];
} OSCMOD;

typedef struct { //MIXOUT
  char outvar[SYNMOD_CHARS];
  char amplitude[SYNMOD_CHARS];
} MIXOUT;

#ifndef ModSyn_H
#define ModSyn_H
class ModSyn{

  private:
   const char* patch;
   const char* name;
   FILE *log; 
   char modname[64];
   OSCMOD *oscs;
   MIXOUT *mixes;
   FILE *file; 
   FILE *fileOut;
   int osc_count= 0;
   int mix_count= 0;

  protected:
   

  public:
      ModSyn();
      ModSyn(const char* patch,
             const char* name); 
      ~ModSyn();
      void processPatch();
      void read_osc(OSCMOD *oscs, 
                    int count, 
                    FILE* file);
      void read_mix(MIXOUT *mix, 
                    int count, 
                    FILE* file);
      void print_osc(OSCMOD osc, 
                     FILE* outputFile);
      void print_mix(MIXOUT mix, 
                     FILE* outputFile);
      void print_header(FILE* outputFile);
      void printInstr(FILE* outputFile);
      void print_score(float duration,
                       FILE* outputFile);
      void readPatchFile();
      void readInstr();
      bool compareFiles(const char* filePath1, 
                        const char* filePath2);
};
#endif
