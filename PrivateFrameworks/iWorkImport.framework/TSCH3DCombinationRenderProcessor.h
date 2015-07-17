/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DShaderEffects * mEffects;
    NSIndexSet * mEnabled;
    struct StateStack<TSCH3D::ObjectState, 6> { 
        unsigned int mIndex; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__first_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    BOOL mipmap; 
                    BOOL repeat; 
                    BOOL nearest; 
                    int unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
                        struct tvec2<int> { 
                            union { 
                                int x; 
                                int r; 
                                int s; 
                            } ; 
                            union { 
                                int y; 
                                int g; 
                                int t; 
                            } ; 
                        } sizeLODHint; 
                    } textureSizeHint; 
                    BOOL is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mCurrent; 
        struct ObjectState { 
            struct ObjcSharedPtr<NSSet> { 
                NSSet *mValue; 
            } mEffects; 
            struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                struct Lookup {} *__begin_; 
                struct Lookup {} *__end_; 
                struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { 
                    struct Lookup {} *__first_; 
                } __end_cap_; 
            } mAttributes; 
            struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { 
                struct ObjcSharedPtr<NSObject> { 
                    NSObject *mValue; 
                } __elems_[8]; 
            } mTextures; 
            struct array<TSCH3D::TextureAttributes, 8> { 
                struct TextureAttributes { 
                    int object; 
                    int format; 
                    BOOL mipmap; 
                    BOOL repeat; 
                    BOOL nearest; 
                    int unit; 
                    struct TextureSizeHint { 
                        int loadOptimizedMipmaps; 
                        struct tvec2<int> { 
                            union { 
                                int x; 
                                int r; 
                                int s; 
                            } ; 
                            union { 
                                int y; 
                                int g; 
                                int t; 
                            } ; 
                        } sizeLODHint; 
                    } textureSizeHint; 
                    BOOL is3DTexture; 
                } __elems_[8]; 
            } mTextureAttributes; 
        } mStack[6]; 
    }  mObjectStateStack;
    struct tmat4x4<float> { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } value[4]; 
    }  mProjection;
    BOOL  mProjectionChanged;
    TSCH3DShaderEffectsStates * mShaderEffectsStates;
    BOOL  mTransformChanged;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { 
        unsigned int mIndex; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
                union { 
                    float w; 
                    float a; 
                    float q; 
                } ; 
            } value[4]; 
        } mCurrent; 
        struct tmat4x4<float> { 
            struct tvec4<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
                union { 
                    float w; 
                    float a; 
                    float q; 
                } ; 
            } value[4]; 
        } mStack[8]; 
    }  mTransformStack;
}

@property (nonatomic, readonly) BOOL projectionChanged;
@property (nonatomic, readonly) BOOL transformChanged;

+ (id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)currentTransform;
- (void)dealloc;
- (id)effects;
- (id)effectsStates;
- (id)initWithOriginal:(id)arg1;
- (id)initWithOriginal:(id)arg1 enableTypes:(id)arg2;
- (BOOL)matrixEnabled;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (BOOL)objectStateEnabled;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned int x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_2_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_3_1; struct Lookup {} *x_2_3_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_4_1; } x_2_3_3; } x_1_2_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_4_1; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_4_2; } x_3_3_1[8]; } x_1_2_3; } x_2_1_1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x_1_3_1; struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_2_4_1; struct Lookup {} *x_2_4_2; struct __compressed_pair<TSCH3D::ObjectState::Lookup *, std::__1::allocator<TSCH3D::ObjectState::Lookup> > { struct Lookup {} *x_3_5_1; } x_2_4_3; } x_1_3_2; struct array<SFUtility::ObjcSharedPtr<NSObject>, 8> { struct ObjcSharedPtr<NSObject> { id x_1_5_1; void*x_1_5_2; } x_3_4_1[8]; } x_1_3_3; } x_2_2_1; void*x_2_2_2; } x_2_1_2[6]; void*x_2_1_3; void*x_2_1_4; void*x_2_1_5; void*x_2_1_6; void*x_2_1_7; void*x_2_1_8; void*x_2_1_9; void*x_2_1_10; void*x_2_1_11; void*x_2_1_12; void*x_2_1_13; void*x_2_1_14; void x_2_1_15; void*x_2_1_16; out void*x_2_1_17; int x_2_1_18; void*x_2_1_19; double x_2_1_20; void*x_2_1_21; char *x_2_1_22; void*x_2_1_23; void*x_2_1_24; void*x_2_1_25; void*x_2_1_26; void*x_2_1_27; void*x_2_1_28; void*x_2_1_29; void*x_2_1_30; void*x_2_1_31; void*x_2_1_32; void*x_2_1_33; void*x_2_1_34; void*x_2_1_35; void x_2_1_36; void*x_2_1_37; out void*x_2_1_38; int x_2_1_39; void*x_2_1_40; double x_2_1_41; void*x_2_1_42; char *x_2_1_43; void*x_2_1_44; void*x_2_1_45; void*x_2_1_46; void*x_2_1_47; void*x_2_1_48; void*x_2_1_49; void*x_2_1_50; void*x_2_1_51; void*x_2_1_52; void*x_2_1_53; void*x_2_1_54; void*x_2_1_55; void*x_2_1_56; void x_2_1_57; void*x_2_1_58; out void*x_2_1_59; int x_2_1_60; void*x_2_1_61; double x_2_1_62; void*x_2_1_63; char *x_2_1_64; void*x_2_1_65; void*x_2_1_66; void*x_2_1_67; void*x_2_1_68; void*x_2_1_69; void*x_2_1_70; void*x_2_1_71; void*x_2_1_72; void*x_2_1_73; void*x_2_1_74; void*x_2_1_75; void x_2_1_76; void*x_2_1_77; void*x_2_1_78; void*x_2_1_79; BOOL x_2_1_80; void*x_2_1_81; void*x_2_1_82; void*x_2_1_83; out void*x_2_1_84; const void*x_2_1_85; void*x_2_1_86; void*x_2_1_87; void*x_2_1_88; void*x_2_1_89; unsigned short x_2_1_90; void*x_2_1_91; unsigned char x_2_1_92; void*x_2_1_93; void*x_2_1_94; void*x_2_1_95; void*x_2_1_96; void*x_2_1_97; long doublex_2_1_98; void*x_2_1_99; SEL x_2_1_100; void*x_2_1_101; SEL x_2_1_102; void*x_2_1_103; bycopy void*x_2_1_104; unsigned int x_2_1_105/* : ? */; void*x_2_1_106; void*x_2_1_107; void*x_2_1_108; void*x_2_1_109; void*x_2_1_110; BOOL x_2_1_111; void*x_2_1_112; void*x_2_1_113; void*x_2_1_114; unsigned short x_2_1_115; void*x_2_1_116; void*x_2_1_117; void*x_2_1_118; void*x_2_1_119; void*x_2_1_120; void*x_2_1_121; void*x_2_1_122; void*x_2_1_123; void*x_2_1_124; SEL x_2_1_125; void*x_2_1_126; SEL x_2_1_127; void*x_2_1_128; unsigned long x_2_1_129; void*x_2_1_130; out void*x_2_1_131; out void*x_2_1_132; void*x_2_1_133; void*x_2_1_134; void*x_2_1_135; void*x_2_1_136; void*x_2_1_137; void*x_2_1_138; void*x_2_1_139; void*x_2_1_140; void*x_2_1_141; void*x_2_1_142; short x_2_1_143; void*x_2_1_144; void*x_2_1_145; void*x_2_1_146; double x_2_1_147; void*x_2_1_148; SEL x_2_1_149; void*x_2_1_150; SEL x_2_1_151; void*x_2_1_152; void*x_2_1_153; void*x_2_1_154; void*x_2_1_155; void*x_2_1_156; void*x_2_1_157; void*x_2_1_158; SEL x_2_1_159; void*x_2_1_160; SEL x_2_1_161; void*x_2_1_162; void*x_2_1_163; void*x_2_1_164; long x_2_1_165; void*x_2_1_166; long x_2_1_167; void*x_2_1_168; out void*x_2_1_169; BOOL x_2_1_170; void*x_2_1_171; void*x_2_1_172; void*x_2_1_173; void*x_2_1_174; void*x_2_1_175; out void*x_2_1_176; const void*x_2_1_177; void*x_2_1_178; void*x_2_1_179; void*x_2_1_180; void*x_2_1_181; unsigned short x_2_1_182; void*x_2_1_183; unsigned char x_2_1_184; void*x_2_1_185; void*x_2_1_186; void*x_2_1_187; void*x_2_1_188; void*x_2_1_189; long doublex_2_1_190; void*x_2_1_191; SEL x_2_1_192; void*x_2_1_193; SEL x_2_1_194; void*x_2_1_195; bycopy void*x_2_1_196; unsigned int x_2_1_197/* : ? */; void*x_2_1_198; void*x_2_1_199; void*x_2_1_200; void*x_2_1_201; void*x_2_1_202; BOOL x_2_1_203; void*x_2_1_204; void*x_2_1_205; void*x_2_1_206; unsigned short x_2_1_207; void*x_2_1_208; void*x_2_1_209; void*x_2_1_210; void*x_2_1_211; void*x_2_1_212; void*x_2_1_213; void*x_2_1_214; void*x_2_1_215; void*x_2_1_216; SEL x_2_1_217; void*x_2_1_218; SEL x_2_1_219; void*x_2_1_220; unsigned long x_2_1_221; void*x_2_1_222; out void*x_2_1_223; out void*x_2_1_224; void*x_2_1_225; void*x_2_1_226; void*x_2_1_227; void*x_2_1_228; void*x_2_1_229; void*x_2_1_230; void*x_2_1_231; void*x_2_1_232; void*x_2_1_233; void*x_2_1_234; void*x_2_1_235; void*x_2_1_236; void*x_2_1_237; void*x_2_1_238; struct x_2_1_239; void*x_2_1_240; void*x_2_1_241; void*x_2_1_242; short x_2_1_243; void*x_2_1_244; void*x_2_1_245; void*x_2_1_246; const void*x_2_1_247; void*x_2_1_248; void*x_2_1_249; BOOL x_2_1_250; void*x_2_1_251; void*x_2_1_252; void*x_2_1_253; void*x_2_1_254; void*x_2_1_255; unsigned long x_2_1_256; void*x_2_1_257; out void*x_2_1_258; out void*x_2_1_259; void*x_2_1_260; void*x_2_1_261; void*x_2_1_262; void*x_2_1_263; void*x_2_1_264; void*x_2_1_265; void*x_2_1_266; void*x_2_1_267; struct x_2_1_268; void*x_2_1_269; } x2; void*x3; void*x4; void*x5; char *x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; short x26; void*x27; void*x28; void*x29; const void*x30; void*x31; void*x32; BOOL x33; void*x34; void*x35; void*x36; void*x37; void*x38; unsigned long x39; void*x40; out void*x41; out void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; struct x51; void*x52; }*)objectStateStack;
- (void)popMatrix;
- (void)popState;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (BOOL)projectionChanged;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)projectionTransform;
- (void)pushMatrix;
- (void)pushState;
- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1;
- (void)resetBuffers;
- (void)resetTransformChangeFlags;
- (void)scale:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;
- (BOOL)shaderEnabled;
- (BOOL)transformChanged;
- (void)translate:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1;

@end
