/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {
    MDLMaterial * _baseMaterial;
    NSMutableArray * _builtinProperties;
    NSString * _name;
    MDLScatteringFunction * _scatteringFunction;
    NSMutableArray * _userProperties;
}

@property (nonatomic, retain) MDLMaterial *baseMaterial;
@property (nonatomic, readonly) struct BidirectionalScatteringDistributionFunction { int (**x1)(); struct BSDFMaterialValues { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; } x2; }*bsdf;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) MDLScatteringFunction *scatteringFunction;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (id)baseMaterial;
- (struct BidirectionalScatteringDistributionFunction { int (**x1)(); struct BSDFMaterialValues { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; } x2; }*)bsdf;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)init;
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution { int (**x1)(); struct BSDFMaterialValues { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; } x2; }*)arg2;
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;
- (id)name;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertyNamed:(id)arg1;
- (id)propertyWithSemantic:(unsigned int)arg1;
- (void)removeAllProperties;
- (void)removeProperty:(id)arg1;
- (id)scatteringFunction;
- (void)setBaseMaterial:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setScatteringFunction:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)materialWithSCNMaterial:(id)arg1;

@end
