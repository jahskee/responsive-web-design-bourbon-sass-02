function sameHeights(selector) {
        var selector = selector || '[data-key="sameHeights"]',
            query = document.querySelectorAll(selector),
            elements = query.length,
            max = 0;
        if (elements) {
            while (elements--) {
                var element = query[elements];
                if (element.clientHeight > max) {
                    max = element.clientHeight;
                }
            }
            elements = query.length;
            while (elements--) {
                var element = query[elements];
                element.style.height = max + 'px';
            }
        }
}

if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
    // some code..
} else {
    if ('addEventListener' in window) {
        window.addEventListener('resize', function(){
            sameHeights('[data-key="sameHeights"]');
        });
        window.addEventListener('load', function(){
            sameHeights('[data-key="sameHeights"]');
        });


        window.addEventListener('resize', function(){
            sameHeights('[data-key="sameHeights2"]');
        });
        window.addEventListener('load', function(){
            sameHeights('[data-key="sameHeights2"]');
        });
    }

}

