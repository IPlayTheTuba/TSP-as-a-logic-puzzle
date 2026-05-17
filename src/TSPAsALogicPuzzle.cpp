#include <iostream>
#include <random>
#include <windows.h>

#include <structures\Point.h>
#include <structures\Line.h>
#include <display\MyFrame.h>
using namespace std;

#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
 
class TSPAsALogicPuzzle : public wxApp
{
public:
    bool OnInit() override;
};
 
wxIMPLEMENT_APP(TSPAsALogicPuzzle); 

bool TSPAsALogicPuzzle::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}