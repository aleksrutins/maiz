#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_MAIZ
    #define MAIZ_PUBLIC __declspec(dllexport)
  #else
    #define MAIZ_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_MAIZ
      #define MAIZ_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define MAIZ_PUBLIC
  #endif
#endif