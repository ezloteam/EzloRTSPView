//
//  NRTSPView.m
//  RTSPView
//
//  Created by Max Vitruk on 8/19/19.
//  Copyright © 2019 eZLO. All rights reserved.
//

#import "NRTSPView.h"

@implementation NRTSPView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)startStream:(NSString*) stringURL
{
    _mediaPlayer = nil;
    
    NSURL* url = [[NSURL alloc] initWithString:stringURL];
    VLCMedia* media = [[VLCMedia alloc] initWithURL:url];
    
    _mediaPlayer = [[VLCMediaPlayer alloc] init];
    _mediaPlayer.media = media;
    _mediaPlayer.drawable = self;
    [_mediaPlayer play];
}

- (void)stopStream
{
    [_mediaPlayer stop];
}


@end
