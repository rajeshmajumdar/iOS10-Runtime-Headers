/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKModelObject : NSObject {
    BOOL  _active;
    struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { 
        struct __tree<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true>, std::__1::allocator<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { 
            struct __tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _commandBuffers;
    NSObject<OS_dispatch_semaphore> * _drawReady;
    unsigned int  _needsDisplay;
    unsigned int  _needsLayout;
    NSMutableArray * _submodels;
    VKModelObject * _supermodel;
    struct CommandBufferIdSet { 
        struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { 
            unsigned char *__begin_; 
            unsigned char *__end_; 
            struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { 
                unsigned char *__first_; 
            } __end_cap_; 
        } _ids; 
    }  _supportedPassIds;
    VKWorld * _world;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, readonly) struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (nonatomic, readonly) NSArray *submodels;
@property (nonatomic, readonly) VKModelObject *supermodel;
@property (nonatomic) VKWorld *world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_removeSubmodel:(id)arg1;
- (void)addSubmodel:(id)arg1;
- (void)clearCommandBuffers;
- (void)dealloc;
- (void)didMoveToSupermodel;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)didRemoveFromSuperModel;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3 dispatchQueue:(id)arg4;
- (id)init;
- (BOOL)isActive;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (void)lockCommandBuffers:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg1;
- (void)removeFromSupermodel;
- (void)removeSubmodel:(id)arg1;
- (void)reset;
- (void)runAnimation:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setSupermodel:(id)arg1;
- (void)setSupportedPasses:(const struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_1_1; unsigned char *x_1_1_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)setWorld:(id)arg1;
- (BOOL)shouldLayoutWithoutStyleManager;
- (struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (id)submodels;
- (id)supermodel;
- (const struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_1_1; unsigned char *x_1_1_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_2_1; } x_1_1_3; } x1; }*)supportedRenderPasses;
- (void)unLockCommandBuffers:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg1;
- (void)willMoveToSupermodel:(id)arg1;
- (id)world;

@end
