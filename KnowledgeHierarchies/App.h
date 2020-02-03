#pragma once
#include "App.xaml.g.h" //That will be built for me...thank you.
#include "winrt/Windows.Foundation.Metadata.h" //That allows me to use the work created.

namespace winrt::KnowledgeHierarchies::implementation
{
	struct App : AppT<App>
	{
		App();

		void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const&);
		void OnSuspending(IInspectable const&, Windows::ApplicationModel::SuspendingEventArgs const&);
		void OnNavigationFailed(IInspectable const&, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const&);
	};

}
