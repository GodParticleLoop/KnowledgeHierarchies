#pragma once

#include "winrt/Windows.Foundation.Metadata.h"
#include "MainPage.g.h"

namespace winrt::KnowledgeHierarchies::implementation
{
    struct MainPage : MainPageT<MainPage>
    {

        MainPage();
        BOOLEAN rs4;
        BOOLEAN MyProperty();
        void MyProperty(BOOLEAN value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

    };
}

namespace winrt::KnowledgeHierarchies::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {

    };
}
