// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MediaQueryListEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"

namespace blink {

void V8MediaQueryListEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaQueryListEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

#if V8_MAJOR_VERSION > 5
    v8::TryCatch block(isolate);
#else
    v8::TryCatch block;
#endif
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> matchesValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "matches")).ToLocal(&matchesValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (matchesValue.IsEmpty() || matchesValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool matches = toBoolean(isolate, matchesValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setMatches(matches);
        }
    }

    {
        v8::Local<v8::Value> mediaValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "media")).ToLocal(&mediaValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (mediaValue.IsEmpty() || mediaValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> media = mediaValue;
            if (!media.prepare(exceptionState))
                return;
            impl.setMedia(media);
        }
    }

}

v8::Local<v8::Value> toV8(const MediaQueryListEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8MediaQueryListEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8MediaQueryListEventInit(const MediaQueryListEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasMatches()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "matches"), v8Boolean(impl.matches(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "matches"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasMedia()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "media"), v8String(isolate, impl.media()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "media"), v8String(isolate, String("")))))
            return false;
    }

    return true;
}

MediaQueryListEventInit NativeValueTraits<MediaQueryListEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    MediaQueryListEventInit impl;
    V8MediaQueryListEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
