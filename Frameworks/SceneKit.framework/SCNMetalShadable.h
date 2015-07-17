/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalShadable : NSObject {
    /* Warning: unhandled array encoding: '[31@]' */ id  _fragmentBuffers;
    /* Warning: unhandled array encoding: '[15@]' */ id  _fragmentSamplers;
    /* Warning: unhandled array encoding: '[31@]' */ id  _fragmentTextures;
    /* Warning: unhandled array encoding: '[31@]' */ id  _vertexBuffers;
    /* Warning: unhandled array encoding: '[15@]' */ id  _vertexSamplers;
    /* Warning: unhandled array encoding: '[31@]' */ id  _vertexTextures;
    int  geometryModificationCount;
    int  materialModificationCount;
}

@property (nonatomic) int geometryModificationCount;
@property (nonatomic) int materialModificationCount;

- (id)bufferAtIndices:(struct { BOOL x1; BOOL x2; })arg1;
- (void)dealloc;
- (int)geometryModificationCount;
- (int)materialModificationCount;
- (id)samplerAtIndices:(struct { BOOL x1; BOOL x2; })arg1;
- (void)setGeometryModificationCount:(int)arg1;
- (void)setMaterialModificationCount:(int)arg1;
- (void)setResource:(id)arg1 ofType:(unsigned int)arg2 atIndices:(struct { BOOL x1; BOOL x2; })arg3;
- (id)textureAtIndices:(struct { BOOL x1; BOOL x2; })arg1;

@end
