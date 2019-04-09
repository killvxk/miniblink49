// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8AutocompleteErrorEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"

namespace blink {

void V8AutocompleteErrorEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, AutocompleteErrorEventInit& impl, ExceptionState& exceptionState)
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
        v8::Local<v8::Value> reasonValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "reason")).ToLocal(&reasonValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (reasonValue.IsEmpty() || reasonValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> reason = reasonValue;
            if (!reason.prepare(exceptionState))
                return;
            static const char* validValues[] = {
                "",
                "cancel",
                "disabled",
                "invalid",
            };
            if (!isValidEnum(reason, validValues, WTF_ARRAY_LENGTH(validValues), "AutocompleteErrorReason", exceptionState))
                return;
            impl.setReason(reason);
        }
    }

}

v8::Local<v8::Value> toV8(const AutocompleteErrorEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8EventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8AutocompleteErrorEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8AutocompleteErrorEventInit(const AutocompleteErrorEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasReason()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "reason"), v8String(isolate, impl.reason()))))
            return false;
    }

    return true;
}

AutocompleteErrorEventInit NativeValueTraits<AutocompleteErrorEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    AutocompleteErrorEventInit impl;
    V8AutocompleteErrorEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
