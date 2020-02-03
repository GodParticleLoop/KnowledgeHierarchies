
#include "pch.h"
#include "MyPage.h"
#include "MyPage.g.cpp"
#include <Generated Files\MyPage.xaml.g.h>



using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::Foundation::Metadata;

namespace winrt::KnowledgeHierarchies::implementation
{
    MyPage::MyPage():rs4(FALSE)
    {
        InitializeComponent();

    }

    BOOLEAN MyPage::MyProperty()
    {
        //throw hresult_not_implemented();
        return rs4;
    }

    void MyPage::MyProperty(BOOLEAN  value )
    {
        //throw hresult_not_implemented();
        rs4 = value;
    }

    void MyPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {

        MyProperty(ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 6));

        if (MyProperty())
        {
            myButton().Content(box_value(L"Yes Sir!"));
        }
        else
        {
            myButton().Content(box_value(L"No?"));
            //L"https://godparticleloop.github.io/KnowledgeHierarchies/"
        }
    }
}
