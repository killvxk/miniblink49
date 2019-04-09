// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLAllCollection.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/UnionTypesCore.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8GCController.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/html/LabelsNodeList.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLAllCollection::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLAllCollection::domTemplate, V8HTMLAllCollection::refObject, V8HTMLAllCollection::derefObject, V8HTMLAllCollection::trace, 0, V8HTMLAllCollection::visitDOMWrapper, V8HTMLAllCollection::preparePrototypeObject, V8HTMLAllCollection::installConditionallyEnabledProperties, "HTMLAllCollection", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent, WrapperTypeInfo::WillBeGarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLAllCollection.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLAllCollection::s_wrapperTypeInfo = V8HTMLAllCollection::wrapperTypeInfo;

namespace HTMLAllCollectionV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    HTMLAllCollectionV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    V8HTMLAllCollection::itemMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(createMinimumArityTypeErrorForMethod(info.GetIsolate(), "namedItem", "HTMLAllCollection", 1, info.Length()), info.GetIsolate());
        return;
    }
    HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());
    V8StringResource<> name;
    {
        name = info[0];
        if (!name.prepare())
            return;
    }
    NodeListOrElement result;
    impl->namedGetter(name, result);
    v8SetReturnValue(info, result);
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    HTMLAllCollectionV8Internal::namedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());
    RefPtrWillBeRawPtr<Element> result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMIndexedProperty");
    HTMLAllCollectionV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyGetter(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    auto nameString = name.As<v8::String>();
    HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(nameString);
    NodeListOrElement result;
    impl->namedGetter(propertyName, result);
    if (result.isNull())
        return;
    v8SetReturnValue(info, result);
}

static void namedPropertyGetterCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    HTMLAllCollectionV8Internal::namedPropertyGetter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyQuery(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name.As<v8::String>());
#if V8_MAJOR_VERSION > 5
    v8::String::Utf8Value namedProperty(info.GetIsolate(), name);
#else
    v8::String::Utf8Value namedProperty(name);
#endif
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "HTMLAllCollection", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    HTMLAllCollectionV8Internal::namedPropertyQuery(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    HTMLAllCollection* impl = V8HTMLAllCollection::toImpl(info.Holder());
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "HTMLAllCollection", info.Holder(), info.GetIsolate());
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Local<v8::Array> v8names = v8::Array::New(info.GetIsolate(), names.size());
    for (size_t i = 0; i < names.size(); ++i) {
        if (!v8CallBoolean(v8names->Set(info.GetIsolate()->GetCurrentContext(), v8::Integer::New(info.GetIsolate(), i), v8String(info.GetIsolate(), names[i]))))
            return;
    }
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMNamedProperty");
    HTMLAllCollectionV8Internal::namedPropertyEnumerator(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace HTMLAllCollectionV8Internal

void V8HTMLAllCollection::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    HTMLAllCollection* impl = scriptWrappable->toImpl<HTMLAllCollection>();
    // The ownerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->ownerNode())) {
        Node* root = V8GCController::opaqueRootForGC(isolate, owner);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
}

static const V8DOMConfiguration::AccessorConfiguration V8HTMLAllCollectionAccessors[] = {
    {"length", HTMLAllCollectionV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLAllCollectionMethods[] = {
    {"item", HTMLAllCollectionV8Internal::itemMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"namedItem", HTMLAllCollectionV8Internal::namedItemMethodCallback, 0, 1, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8HTMLAllCollectionTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "HTMLAllCollection", v8::Local<v8::FunctionTemplate>(), V8HTMLAllCollection::internalFieldCount,
        0, 0,
        V8HTMLAllCollectionAccessors, WTF_ARRAY_LENGTH(V8HTMLAllCollectionAccessors),
        V8HTMLAllCollectionMethods, WTF_ARRAY_LENGTH(V8HTMLAllCollectionMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    {
        v8::IndexedPropertyHandlerConfiguration config(HTMLAllCollectionV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<HTMLAllCollection>);
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }
    {
        v8::NamedPropertyHandlerConfiguration config(HTMLAllCollectionV8Internal::namedPropertyGetterCallback, 0, HTMLAllCollectionV8Internal::namedPropertyQueryCallback, 0, HTMLAllCollectionV8Internal::namedPropertyEnumeratorCallback);
        config.flags = static_cast<v8::PropertyHandlerFlags>(static_cast<int>(config.flags) | static_cast<int>(v8::PropertyHandlerFlags::kOnlyInterceptStrings));
        config.flags = static_cast<v8::PropertyHandlerFlags>(static_cast<int>(config.flags) | static_cast<int>(v8::PropertyHandlerFlags::kNonMasking));
        functionTemplate->InstanceTemplate()->SetHandler(config);
    }
    functionTemplate->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLAllCollection::legacyCallCustom);
    functionTemplate->InstanceTemplate()->MarkAsUndetectable();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8HTMLAllCollection::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLAllCollectionTemplate);
}

bool V8HTMLAllCollection::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLAllCollection::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLAllCollection* V8HTMLAllCollection::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8HTMLAllCollection::refObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLAllCollection>()->ref();
#endif
}

void V8HTMLAllCollection::derefObject(ScriptWrappable* scriptWrappable)
{
#if !ENABLE(OILPAN)
    scriptWrappable->toImpl<HTMLAllCollection>()->deref();
#endif
}

} // namespace blink
