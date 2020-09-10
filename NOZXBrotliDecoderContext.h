//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/NOZDecoderContext-Protocol.h>

@class NSString;
@protocol NOZDecoder;

@interface NOZXBrotliDecoderContext : NSObject <NOZDecoderContext>
{
    struct BrotliDecoderStateStruct *_decoderState;
    CDStruct_43a34ed1 _flags;
    unsigned char _decoderBuffer[16384];
    char *_decoderBufferPointer;
    unsigned long long _decoderBufferRemainingBytesCount;
    _Bool _hasFinished;
    CDUnknownBlockType _flushCallback;
    id <NOZDecoder> _decoder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NOZDecoder> decoder; // @synthesize decoder=_decoder;
@property(readonly, copy, nonatomic) CDUnknownBlockType flushCallback; // @synthesize flushCallback=_flushCallback;
@property(readonly, nonatomic) _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
- (void)flush;
- (_Bool)finalizeDecoding;
- (_Bool)decodeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)initializeContext;
- (void)dealloc;
- (id)initWithDecoder:(id)arg1 flushCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

