﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "MainPage.xaml.h"

#include "App.g.hpp"
#include "MainPage.g.hpp"

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        _otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForName(::Platform::String^ typeName)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(typeName);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CheckOtherMetadataProvidersForType(::Windows::UI::Xaml::Interop::TypeName t)
{
    ::Windows::UI::Xaml::Markup::IXamlType^ foundXamlType = nullptr;
    for (unsigned int i = 0; i < OtherProviders->Size; i++)
    {
        auto xamlType = OtherProviders->GetAt(i)->GetXamlType(t);
        if(xamlType != nullptr)
        {
            if(xamlType->IsConstructible)    // not Constructible means it might be a Return Type Stub
            {
                return xamlType;
            }
            foundXamlType = xamlType;
        }
    }
    return foundXamlType;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    if (typeName == L"Windows.UI.Xaml.Controls.Page")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Controls.UserControl")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Object")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Windows.UI.Xaml.Media.ImageSource")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"Int32")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"String")
    {
        return ref new XamlSystemBaseType(typeName);
    }

    if (typeName == L"FacebookDemo.MainPage")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Windows.UI.Xaml.Controls.Page"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->Activator =
            []() -> Platform::Object^ 
            {
                return ref new ::FacebookDemo::MainPage(); 
            };
        userType->SetIsLocalType();
        return userType;
    }

    if (typeName == L"FacebookDemo.FacebookAlbum")
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(this, typeName, GetXamlTypeByName(L"Object"));
        userType->KindOfType = ::Windows::UI::Xaml::Interop::TypeKind::Custom;
        userType->AddMemberName(L"Preview");
        userType->AddMemberName(L"Count");
        userType->AddMemberName(L"Title");
        userType->SetIsBindable();
        userType->SetIsLocalType();
        return userType;
    }

    return nullptr;
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    if (longMemberName == L"FacebookDemo.FacebookAlbum.Preview")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Preview", L"Windows.UI.Xaml.Media.ImageSource");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::FacebookDemo::FacebookAlbum^)instance;
                return that->Preview;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"FacebookDemo.FacebookAlbum.Count")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Count", L"Int32");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::FacebookDemo::FacebookAlbum^)instance;
                auto value = ref new ::Platform::Box<::default::int32>(that->Count);
                return value;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    if (longMemberName == L"FacebookDemo.FacebookAlbum.Title")
    {
        ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(this, L"Title", L"String");
        xamlMember->Getter =
            [](Object^ instance) -> Object^
            {
                auto that = (::FacebookDemo::FacebookAlbum^)instance;
                return that->Title;
            };

        xamlMember->SetIsReadOnly();
        return xamlMember;
    }

    return nullptr;
}

