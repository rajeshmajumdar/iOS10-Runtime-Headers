/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker {
    float  _arrowBrightness;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _arrowColor;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _arrowColorStale;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _arrowRenderItem;
    struct shared_ptr<ggl::TextureAlphaMask::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _arrowShaderSetup;
    VKTimedAnimation * _billboardAnimation;
    float  _billboardFactor;
    float  _circleBrightness;
    struct shared_ptr<ggl::RenderItem> { 
        struct RenderItem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _circleRenderItem;
    struct shared_ptr<ggl::TextureWithBrightness::Shader::Setup> { 
        struct Setup {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _circleShaderSetup;
    struct shared_ptr<ggl::RenderState> { 
        struct RenderState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gglPuckRenderState;
    float  _greyPuckAlphaScale;
    BOOL  _needsTextureUpdate;
    double  _presentationCourse;
    BOOL  _puckFlipped;
    double  _puckOffset;
    struct { 
        struct { 
            double v[4][4]; 
        } arrowMatrix; 
        struct { 
            double v[4][4]; 
        } circleMatrix; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } arrowColor; 
    }  _puckState;
    int  _puckStyle;
    VKTimedAnimation * _puckStyleAnimation;
    float  _scale;
    BOOL  _shouldBillboard;
    BOOL  _shouldShowCourse;
    double  _sizePoints;
    BOOL  _stale;
    int  _style;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _textureArrow;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _textureCircle;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } innerColor;
@property (nonatomic) double presentationCourse;
@property (nonatomic) float scale;
@property (nonatomic) BOOL shouldBillboard;
@property (nonatomic) BOOL shouldShowCourse;
@property (getter=isStale, nonatomic) BOOL stale;
@property (nonatomic) int style;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updatePuckStyle;
- (void)_updateTexturesIfNeeded;
- (void)appendCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned int x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; double x19; SEL x20; SEL x21; unsigned char x22; out void*x23; void*x24; void*x25; in double x26; bool x27; void*x28; float x29; float x30; void*x31; const unsigned int x32; double x33; void*x34; void*x35; void*x36; void*x37; const void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; float x47; int x48; const short x49; void*x50; void*x51; void*x52; unsigned long x53; }*)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3;
- (struct { float x1; float x2; float x3; float x4; })innerColor;
- (BOOL)isStale;
- (void)layoutWithContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)presentationCourse;
- (float)scale;
- (void)setInnerColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setModel:(id)arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setShouldBillboard:(BOOL)arg1;
- (void)setShouldShowCourse:(BOOL)arg1;
- (void)setStale:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (BOOL)shouldBillboard;
- (BOOL)shouldShowCourse;
- (int)style;
- (void)updateWithStyleQuery:(const struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

@end
