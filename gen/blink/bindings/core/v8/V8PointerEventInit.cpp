// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PointerEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8MouseEventInit.h"

namespace blink {

void V8PointerEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PointerEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value))
        return;
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8MouseEventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> heightValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "height")).ToLocal(&heightValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (heightValue.IsEmpty() || heightValue->IsUndefined()) {
            // Do nothing.
        } else {
            double height = toRestrictedDouble(isolate, heightValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setHeight(height);
        }
    }

    {
        v8::Local<v8::Value> isPrimaryValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "isPrimary")).ToLocal(&isPrimaryValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (isPrimaryValue.IsEmpty() || isPrimaryValue->IsUndefined()) {
            // Do nothing.
        } else {
            bool isPrimary = toBoolean(isolate, isPrimaryValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setIsPrimary(isPrimary);
        }
    }

    {
        v8::Local<v8::Value> pointerIdValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "pointerId")).ToLocal(&pointerIdValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (pointerIdValue.IsEmpty() || pointerIdValue->IsUndefined()) {
            // Do nothing.
        } else {
            int pointerId = toInt32(isolate, pointerIdValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setPointerId(pointerId);
        }
    }

    {
        v8::Local<v8::Value> pointerTypeValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "pointerType")).ToLocal(&pointerTypeValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (pointerTypeValue.IsEmpty() || pointerTypeValue->IsUndefined()) {
            // Do nothing.
        } else {
            V8StringResource<> pointerType = pointerTypeValue;
            if (!pointerType.prepare(exceptionState))
                return;
            impl.setPointerType(pointerType);
        }
    }

    {
        v8::Local<v8::Value> pressureValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "pressure")).ToLocal(&pressureValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (pressureValue.IsEmpty() || pressureValue->IsUndefined()) {
            // Do nothing.
        } else {
            float pressure = toRestrictedFloat(isolate, pressureValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setPressure(pressure);
        }
    }

    {
        v8::Local<v8::Value> tiltXValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "tiltX")).ToLocal(&tiltXValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (tiltXValue.IsEmpty() || tiltXValue->IsUndefined()) {
            // Do nothing.
        } else {
            int tiltX = toInt32(isolate, tiltXValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setTiltX(tiltX);
        }
    }

    {
        v8::Local<v8::Value> tiltYValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "tiltY")).ToLocal(&tiltYValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (tiltYValue.IsEmpty() || tiltYValue->IsUndefined()) {
            // Do nothing.
        } else {
            int tiltY = toInt32(isolate, tiltYValue, NormalConversion, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setTiltY(tiltY);
        }
    }

    {
        v8::Local<v8::Value> widthValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "width")).ToLocal(&widthValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (widthValue.IsEmpty() || widthValue->IsUndefined()) {
            // Do nothing.
        } else {
            double width = toRestrictedDouble(isolate, widthValue, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setWidth(width);
        }
    }

}

v8::Local<v8::Value> toV8(const PointerEventInit& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8MouseEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    if (!toV8PointerEventInit(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8PointerEventInit(const PointerEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasHeight()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "height"), v8::Number::New(isolate, impl.height()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "height"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasIsPrimary()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isPrimary"), v8Boolean(impl.isPrimary(), isolate))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "isPrimary"), v8Boolean(false, isolate))))
            return false;
    }

    if (impl.hasPointerId()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "pointerId"), v8::Integer::New(isolate, impl.pointerId()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "pointerId"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasPointerType()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "pointerType"), v8String(isolate, impl.pointerType()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "pointerType"), v8String(isolate, String("")))))
            return false;
    }

    if (impl.hasPressure()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "pressure"), v8::Number::New(isolate, impl.pressure()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "pressure"), v8::Number::New(isolate, 0))))
            return false;
    }

    if (impl.hasTiltX()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "tiltX"), v8::Integer::New(isolate, impl.tiltX()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "tiltX"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasTiltY()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "tiltY"), v8::Integer::New(isolate, impl.tiltY()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "tiltY"), v8::Integer::New(isolate, 0))))
            return false;
    }

    if (impl.hasWidth()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "width"), v8::Number::New(isolate, impl.width()))))
            return false;
    } else {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "width"), v8::Number::New(isolate, 0))))
            return false;
    }

    return true;
}

PointerEventInit NativeValueTraits<PointerEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    PointerEventInit impl;
    V8PointerEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
