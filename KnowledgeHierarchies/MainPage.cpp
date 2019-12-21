#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <Generated Files\MainPage.xaml.g.h>


using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::Foundation::Metadata;

namespace winrt::KnowledgeHierarchies::implementation
{
    MainPage::MainPage():rs4(FALSE)
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

        MyProperty(ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 6));

        if (MyProperty())
        {
            myButton().Content(box_value(L"https://sergeizoey2014.visualstudio.com/KnowledgeHierarchies/_git/MatthewKannonA2G?path=%2F&version=GBMvvM&_a=content"));
        }
        else
        {
            myButton().Content(box_value(L"No?"));
        }
    }
}
