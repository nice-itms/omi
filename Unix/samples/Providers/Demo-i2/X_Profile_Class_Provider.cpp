/*
**==============================================================================
**
** Copyright (c) Microsoft Corporation. All rights reserved. See file LICENSE
** for license information.
**
**==============================================================================
*/

/* @migen@ */
#include <MI.h>
#include "X_Profile_Class_Provider.h"

MI_BEGIN_NAMESPACE

X_Profile_Class_Provider::X_Profile_Class_Provider(
        Module* module) :
    m_Module(module)
{
}

X_Profile_Class_Provider::~X_Profile_Class_Provider()
{
}

void X_Profile_Class_Provider::EnumerateInstances(
    Context&  context,
    const String& nameSpace,
    const PropertySet& propertySet,
    bool keysOnly,
    const MI_Filter* filter)
{
    X_Profile_Class inst;

    inst.InstanceID_value(MI_T("world"));
    inst.RegisteredName_value(MI_T("World"));
    inst.SetNamespace(MI_T("interop"));
    context.Post(inst);

    inst.InstanceID_value(MI_T("number"));
    inst.RegisteredName_value(MI_T("Huge Numbers"));
    inst.SetNamespace(MI_T("interop"));
    context.Post(inst);

    context.Post(MI_RESULT_OK);
}

void X_Profile_Class_Provider::GetInstance(
    Context&  context,
    const String& nameSpace,
    const X_Profile_Class& instance_ref,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void X_Profile_Class_Provider::CreateInstance(
    Context&  context,
    const String& nameSpace,
    const X_Profile_Class& new_instance)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void X_Profile_Class_Provider::ModifyInstance(
    Context&  context,
    const String& nameSpace,
    const X_Profile_Class& new_instance,
    const PropertySet& propertySet)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}

void X_Profile_Class_Provider::DeleteInstance(
    Context&  context,
    const String& nameSpace,
    const X_Profile_Class& instance_ref)
{
    context.Post(MI_RESULT_NOT_SUPPORTED);
}


MI_END_NAMESPACE
MI_BEGIN_NAMESPACE
void X_Profile_Class_Provider::Load(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

void X_Profile_Class_Provider::Unload(
        Context& context)
{
    context.Post(MI_RESULT_OK);
}

MI_END_NAMESPACE
