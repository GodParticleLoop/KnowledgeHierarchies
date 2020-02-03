#pragma once


#include "MyPage.g.h"
#include "winrt/Windows.Foundation.Metadata.h"

namespace winrt::KnowledgeHierarchies::implementation
{
    struct MyPage : MainPageT<MyPage>
    {

        MyPage();
        BOOLEAN rs4;
        BOOLEAN MyProperty();
        void MyProperty(BOOLEAN value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    };
}

namespace winrt::KnowledgeHierarchies::factory_implementation
{
    struct MyPage : MainPageT<MyPage, implementation::MyPage>
    {

    };
}
