/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCascadeList : NSArray {
    int  _character;
    unsigned int  _count;
    struct WeakPtr<WebCore::FontCascade> { 
        struct Ref<WTF::WeakReference<WebCore::FontCascade> > { 
            struct WeakReference<WebCore::FontCascade> {} *m_ptr; 
        } m_ref; 
    }  _font;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<const __CTFontDescriptor *> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
        struct type { 
            unsigned char __lx[4]; 
        } m_inlineBuffer[16]; 
    }  _fontDescriptors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)count;
- (id)initWithFont:(const struct FontCascade { struct FontDescription { struct RefCountedArray<WTF::AtomicString> { struct AtomicString {} *x_1_2_1; } x_1_1_1; struct RefPtr<WebCore::FontFeatureSettings> { struct FontFeatureSettings {} *x_2_2_1; } x_1_1_2; float x_1_1_3; float x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 2; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 8; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 2; unsigned int x_1_1_14 : 2; unsigned int x_1_1_15 : 2; unsigned int x_1_1_16 : 2; unsigned int x_1_1_17 : 4; unsigned int x_1_1_18 : 2; unsigned int x_1_1_19 : 2; unsigned int x_1_1_20 : 1; unsigned int x_1_1_21 : 7; unsigned int x_1_1_22 : 2; } x1; struct RefPtr<WebCore::FontCascadeFonts> { struct FontCascadeFonts {} *x_2_1_1; } x2; struct WeakPtrFactory<WebCore::FontCascade> { struct Ref<WTF::WeakReference<WebCore::FontCascade> > { struct WeakReference<WebCore::FontCascade> {} *x_1_2_1; } x_3_1_1; } x3; float x4; float x5; bool x6; unsigned int x7 : 2; }*)arg1 character:(int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;

@end
