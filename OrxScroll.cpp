//! Includes
#define __SCROLL_IMPL__
#include "OrxScroll.h"
#undef __SCROLL_IMPL__

orxSTATUS OrxScroll::Init ()
{
    orxSTATUS result = orxSTATUS_SUCCESS;

    return result;
}

orxSTATUS OrxScroll::Run ()
{
    orxSTATUS result = orxSTATUS_SUCCESS;

    return result;
}

void OrxScroll::Exit ()
{
}

void OrxScroll::BindObjects ()
{
}

int main (int argc, char **argv)
{
  // Executes game
  OrxScroll::GetInstance ().Execute (argc, argv);

  // Done!
  return EXIT_SUCCESS;
}

#ifdef __orxWINDOWS__

#include "windows.h"

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  // Executes game
  OrxScroll::GetInstance ().Execute ();

  // Done!
  return EXIT_SUCCESS;
}

#endif // __orxWINDOWS__
