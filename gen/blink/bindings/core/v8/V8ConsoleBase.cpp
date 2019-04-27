// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ConsoleBase.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptCallStackFactory.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "core/inspector/ScriptArguments.h"
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
const WrapperTypeInfo V8ConsoleBase::wrapperTypeInfo = { gin::kEmbedderBlink, V8ConsoleBase::domTemplate, V8ConsoleBase::refObject, V8ConsoleBase::derefObject, V8ConsoleBase::trace, 0, 0, V8ConsoleBase::preparePrototypeObject, V8ConsoleBase::installConditionallyEnabledProperties, "ConsoleBase", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ConsoleBase.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ConsoleBase::s_wrapperTypeInfo = V8ConsoleBase::wrapperTypeInfo;

namespace ConsoleBaseV8Internal {

static void debugMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->debug(scriptState, scriptArguments.release());
}

static void debugMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::debugMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void errorMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->error(scriptState, scriptArguments.release());
}

static void errorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::errorMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void infoMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->info(scriptState, scriptArguments.release());
}

static void infoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::infoMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void logMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->log(scriptState, scriptArguments.release());
}

static void logMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::logMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void warnMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->warn(scriptState, scriptArguments.release());
}

static void warnMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::warnMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void dirMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->dir(scriptState, scriptArguments.release());
}

static void dirMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::dirMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void dirxmlMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->dirxml(scriptState, scriptArguments.release());
}

static void dirxmlMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::dirxmlMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void tableMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->table(scriptState, scriptArguments.release());
}

static void tableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::tableMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void traceMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->trace(scriptState, scriptArguments.release());
}

static void traceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::traceMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void assertMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "assert", "ConsoleBase", info.Holder(), info.GetIsolate());
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    bool condition;
    {
        condition = toBoolean(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 1));
    impl->assertCondition(scriptState, scriptArguments.release(), condition);
}

static void assertMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::assertMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void countMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->count(scriptState, scriptArguments.release());
}

static void countMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::countMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void markTimelineMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    impl->markTimeline(title);
}

static void markTimelineMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::ConsoleMarkTimeline);
    ConsoleBaseV8Internal::markTimelineMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void profileMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    impl->profile(title);
}

static void profileMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::profileMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void profileEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    impl->profileEnd(title);
}

static void profileEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::profileEndMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void timeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    impl->time(title);
}

static void timeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::timeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void timeEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->timeEnd(scriptState, title);
}

static void timeEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::timeEndMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void timeStampMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    impl->timeStamp(title);
}

static void timeStampMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::timeStampMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void timelineMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->timeline(scriptState, title);
}

static void timelineMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::ConsoleTimeline);
    ConsoleBaseV8Internal::timelineMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void timelineEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    V8StringResource<> title;
    {
        if (!info[0]->IsUndefined()) {
            title = info[0];
            if (!title.prepare())
                return;
        } else {
            title = nullptr;
        }
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    impl->timelineEnd(scriptState, title);
}

static void timelineEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    UseCounter::countDeprecationIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::ConsoleTimelineEnd);
    ConsoleBaseV8Internal::timelineEndMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void groupMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->group(scriptState, scriptArguments.release());
}

static void groupMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::groupMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void groupCollapsedMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->groupCollapsed(scriptState, scriptArguments.release());
}

static void groupCollapsedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::groupCollapsedMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void groupEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    impl->groupEnd();
}

static void groupEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::groupEndMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ConsoleBase* impl = V8ConsoleBase::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    RefPtrWillBeRawPtr<ScriptArguments> scriptArguments(createScriptArguments(scriptState, info, 0));
    impl->clear(scriptState, scriptArguments.release());
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMMethod");
    ConsoleBaseV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace ConsoleBaseV8Internal

static const V8DOMConfiguration::MethodConfiguration V8ConsoleBaseMethods[] = {
    {"debug", ConsoleBaseV8Internal::debugMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"error", ConsoleBaseV8Internal::errorMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"info", ConsoleBaseV8Internal::infoMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"log", ConsoleBaseV8Internal::logMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"warn", ConsoleBaseV8Internal::warnMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"dir", ConsoleBaseV8Internal::dirMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"dirxml", ConsoleBaseV8Internal::dirxmlMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"table", ConsoleBaseV8Internal::tableMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"trace", ConsoleBaseV8Internal::traceMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"assert", ConsoleBaseV8Internal::assertMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"count", ConsoleBaseV8Internal::countMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"markTimeline", ConsoleBaseV8Internal::markTimelineMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"profile", ConsoleBaseV8Internal::profileMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"profileEnd", ConsoleBaseV8Internal::profileEndMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"time", ConsoleBaseV8Internal::timeMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"timeEnd", ConsoleBaseV8Internal::timeEndMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"timeStamp", ConsoleBaseV8Internal::timeStampMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"timeline", ConsoleBaseV8Internal::timelineMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"timelineEnd", ConsoleBaseV8Internal::timelineEndMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"group", ConsoleBaseV8Internal::groupMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"groupCollapsed", ConsoleBaseV8Internal::groupCollapsedMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"groupEnd", ConsoleBaseV8Internal::groupEndMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
    {"clear", ConsoleBaseV8Internal::clearMethodCallback, 0, 0, V8DOMConfiguration::ExposedToAllScripts},
};

static void installV8ConsoleBaseTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "ConsoleBase", v8::Local<v8::FunctionTemplate>(), V8ConsoleBase::internalFieldCount,
        0, 0,
        0, 0,
        V8ConsoleBaseMethods, WTF_ARRAY_LENGTH(V8ConsoleBaseMethods));
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Local<v8::FunctionTemplate> V8ConsoleBase::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ConsoleBaseTemplate);
}

bool V8ConsoleBase::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ConsoleBase::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ConsoleBase* V8ConsoleBase::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8ConsoleBase::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8ConsoleBase::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
