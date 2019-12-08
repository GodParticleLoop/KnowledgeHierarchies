#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <Generated Files\MainPage.xaml.g.h>


using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::KnowledgeHierarchies::implementation
{
    MainPage::MainPage():rs4()
    {
        InitializeComponent();
    }

    BOOLEAN MainPage::MyProperty()
    {
        //throw hresult_not_implemented();
        return rs4;
    }

    void MainPage::MyProperty(BOOLEAN  value )
    {
        //throw hresult_not_implemented();
        rs4 = value;
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
