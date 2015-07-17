/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotoAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    struct __CVBuffer { } * _image;
    struct __CVBuffer { } * _imageLowRes;
    BOOL  _requestFullImage;
    unsigned int  _requestedAnalyses;
    NSMutableDictionary * _results;
    int  _status;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _transform;
}

@property (readonly) int status;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1;
- (void)dealloc;
- (long)downscaleImage;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned int)arg2;
- (int)status;

@end
