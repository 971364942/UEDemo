// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo/UI/SWorldUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWorldUserWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEMO_API UClass* Z_Construct_UClass_USWorldUserWidget();
	DEMO_API UClass* Z_Construct_UClass_USWorldUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Demo();
// End Cross Module References
	void USWorldUserWidget::StaticRegisterNativesUSWorldUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USWorldUserWidget);
	UClass* Z_Construct_UClass_USWorldUserWidget_NoRegister()
	{
		return USWorldUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_USWorldUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSizeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSizeBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowScreenEdge_MetaData[];
#endif
		static void NewProp_bShowScreenEdge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScreenEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowsSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindowsSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USWorldUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SWorldUserWidget.h" },
		{ "ModuleRelativePath", "UI/SWorldUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SWorldUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox = { "ParentSizeBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USWorldUserWidget, ParentSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedActor_MetaData[] = {
		{ "Category", "UI" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "UI/SWorldUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0011000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USWorldUserWidget, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/SWorldUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USWorldUserWidget, WorldOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/SWorldUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge_SetBit(void* Obj)
	{
		((USWorldUserWidget*)Obj)->bShowScreenEdge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge = { "bShowScreenEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USWorldUserWidget), &Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge_SetBit, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WindowsSize_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/SWorldUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WindowsSize = { "WindowsSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USWorldUserWidget, WindowsSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WindowsSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WindowsSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USWorldUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_ParentSizeBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_AttachedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_bShowScreenEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USWorldUserWidget_Statics::NewProp_WindowsSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USWorldUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USWorldUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USWorldUserWidget_Statics::ClassParams = {
		&USWorldUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USWorldUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USWorldUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USWorldUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USWorldUserWidget()
	{
		if (!Z_Registration_Info_UClass_USWorldUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USWorldUserWidget.OuterSingleton, Z_Construct_UClass_USWorldUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USWorldUserWidget.OuterSingleton;
	}
	template<> DEMO_API UClass* StaticClass<USWorldUserWidget>()
	{
		return USWorldUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USWorldUserWidget);
	USWorldUserWidget::~USWorldUserWidget() {}
	struct Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_UI_SWorldUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_UI_SWorldUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USWorldUserWidget, USWorldUserWidget::StaticClass, TEXT("USWorldUserWidget"), &Z_Registration_Info_UClass_USWorldUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USWorldUserWidget), 2552244313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_UI_SWorldUserWidget_h_13759158(TEXT("/Script/Demo"),
		Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_UI_SWorldUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue_Demo_Source_Demo_UI_SWorldUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
