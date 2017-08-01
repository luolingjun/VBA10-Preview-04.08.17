﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "CheatPane.xaml.h"

void ::VBA10::CheatPane::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///CheatPane.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::VBA10::CheatPane::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->LayoutRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 2:
            {
                this->wideView = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
            }
            break;
        case 3:
            {
                this->mediumView = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
            }
            break;
        case 4:
            {
                this->narrowView = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
            }
            break;
        case 5:
            {
                this->titleBar = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 6:
            {
                this->txtNoROM = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 7:
            {
                this->svMain = safe_cast<::Windows::UI::Xaml::Controls::ScrollViewer^>(__target);
            }
            break;
        case 8:
            {
                this->panelAddCode = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
            }
            break;
        case 9:
            {
                this->panelCheatList = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
            }
            break;
        case 10:
            {
                this->cvsAllCheats = safe_cast<::Windows::UI::Xaml::Data::CollectionViewSource^>(__target);
            }
            break;
        case 11:
            {
                this->txtNoCheat = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 12:
            {
                this->cheatList = safe_cast<::Windows::UI::Xaml::Controls::ListBox^>(__target);
            }
            break;
        case 13:
            {
                ::Windows::UI::Xaml::Controls::CheckBox^ element13 = safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(element13))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::VBA10::CheatPane::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&CheatPane::enableCheatBox_Checked);
                (safe_cast<::Windows::UI::Xaml::Controls::CheckBox^>(element13))->Unchecked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::VBA10::CheatPane::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&CheatPane::enableCheatBox_Checked);
            }
            break;
        case 14:
            {
                ::Windows::UI::Xaml::Controls::Button^ element14 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element14))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::VBA10::CheatPane::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&CheatPane::DeleteCheatButton_Click);
            }
            break;
        case 15:
            {
                this->descLabel = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 16:
            {
                this->rowCode = safe_cast<::Windows::UI::Xaml::Controls::RowDefinition^>(__target);
            }
            break;
        case 17:
            {
                this->descBox = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
            }
            break;
        case 18:
            {
                this->codeBox = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
            }
            break;
        case 19:
            {
                this->addButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->addButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::VBA10::CheatPane::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&CheatPane::addButton_Click);
            }
            break;
        case 20:
            {
                this->title = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::VBA10::CheatPane::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


