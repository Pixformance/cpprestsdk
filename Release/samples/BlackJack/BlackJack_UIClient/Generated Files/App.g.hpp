﻿

//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "pch.h"
#include "App.xaml.h"




#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BREAK_ON_UNHANDLED_EXCEPTION
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#if (defined(_M_IX86) || defined(_M_AMD64)) && !defined(_VSDESIGNER_DONT_LOAD_AS_DLL)
#if defined(_M_IX86)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=_DllGetActivationFactory@8,PRIVATE")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow=_DllCanUnloadNow@0,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerDllMain=_VSDesignerDllMain@12,PRIVATE")
#pragma comment(linker, "/INCLUDE:___refMTAThread")
#elif defined(_M_AMD64)
#pragma comment(linker, "/EXPORT:DllGetActivationFactory=DllGetActivationFactory,PRIVATE")
#pragma comment(linker, "/EXPORT:DllCanUnloadNow,PRIVATE")
#pragma comment(linker, "/EXPORT:VSDesignerDllMain,PRIVATE")
#pragma comment(linker, "/INCLUDE:__refMTAThread")
#endif

extern int __abi___threading_model;

extern "C"
{
    int __stdcall _DllMainCRTStartup(void* hinstDLL, unsigned long fdwReason, void** lpvReserved);

    int __stdcall VSDesignerDllMain(void* hinstDLL, unsigned long fdwReason, void** lpvReserved)
    {
        __abi___threading_model = 0;
        return _DllMainCRTStartup(hinstDLL, fdwReason, lpvReserved);
    }
}

#endif // (defined(_M_IX86) || defined(_M_AMD64)) && !defined(_VSDESIGNER_DONT_LOAD_AS_DLL)

void ::BlackjackClient::App::InitializeComponent()
{
#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BREAK_ON_UNHANDLED_EXCEPTION
    UnhandledException += ref new Windows::UI::Xaml::UnhandledExceptionEventHandler(
        [](::Platform::Object^ sender, ::Windows::UI::Xaml::UnhandledExceptionEventArgs^ e)
        {
            (void)sender; // Unused parameter
            if (IsDebuggerPresent())
            {
                ::Platform::String^ errorMessage = e->Message;
                __debugbreak();
            }
        });
#endif
}

::Windows::UI::Xaml::Markup::IXamlType^ ::BlackjackClient::App::GetXamlType(Windows::UI::Xaml::Interop::TypeName type)
{
    if(_provider == nullptr)
    {
        _provider = ref new XamlTypeInfo::InfoProvider::XamlTypeInfoProvider();
    }
    return _provider->GetXamlTypeByType(type);
}

::Windows::UI::Xaml::Markup::IXamlType^ ::BlackjackClient::App::GetXamlType(::Platform::String^ fullName)
{
    if(_provider == nullptr)
    {
        _provider = ref new XamlTypeInfo::InfoProvider::XamlTypeInfoProvider();
    }
    return _provider->GetXamlTypeByName(fullName);
}

::Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition>^ ::BlackjackClient::App::GetXmlnsDefinitions()
{
    return ref new ::Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition>(0);
}

#ifndef DISABLE_XAML_GENERATED_MAIN
int __cdecl main(::Platform::Array<::Platform::String^>^ args)
{
    (void)args; // Unused parameter
    Windows::UI::Xaml::Application::Start(ref new Windows::UI::Xaml::ApplicationInitializationCallback(
        [](Windows::UI::Xaml::ApplicationInitializationCallbackParams^ p) {
            (void)p; // Unused parameter
            auto app = ref new ::BlackjackClient::App();
        }));
}
#endif

void ::BlackjackClient::App::Connect(int connectionId, Platform::Object^ target)
{
    (void)connectionId; // Unused parameter
    (void)target; // Unused parameter
    _contentLoaded = true;
}

