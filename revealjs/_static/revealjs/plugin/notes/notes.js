var RevealNotes=(function(){function a(g){if(!g){var f=document.querySelector('script[src$="notes.js"]').src;f=f.replace(/notes\.js(\?.*)?$/,"");g=f+"notes.html"}var e=window.open(g,"reveal.js - Notes","width=1100,height=700");if(!e){alert("Speaker view popup failed to open. Please make sure popups are allowed and reopen the speaker view.");return}e.Reveal=window.Reveal;function b(){var h=setInterval(function(){e.postMessage(JSON.stringify({namespace:"reveal-notes",type:"connect",url:window.location.protocol+"//"+window.location.host+window.location.pathname+window.location.search,state:Reveal.getState()}),"*")},500);window.addEventListener("message",function(i){var j=JSON.parse(i.data);if(j&&j.namespace==="reveal-notes"&&j.type==="connected"){clearInterval(h);c()}})}function d(k){var m=Reveal.getCurrentSlide(),h=m.querySelector("aside.notes"),i=m.querySelector(".current-fragment");var j={namespace:"reveal-notes",type:"state",notes:"",markdown:false,whitespace:"normal",state:Reveal.getState()};if(m.hasAttribute("data-notes")){j.notes=m.getAttribute("data-notes");j.whitespace="pre-wrap"}if(i){var l=i.querySelector("aside.notes");if(l){h=l}else{if(i.hasAttribute("data-notes")){j.notes=i.getAttribute("data-notes");j.whitespace="pre-wrap";h=null}}}if(h){j.notes=h.innerHTML;j.markdown=typeof h.getAttribute("data-markdown")==="string"}e.postMessage(JSON.stringify(j),"*")}function c(){Reveal.addEventListener("slidechanged",d);Reveal.addEventListener("fragmentshown",d);Reveal.addEventListener("fragmenthidden",d);Reveal.addEventListener("overviewhidden",d);Reveal.addEventListener("overviewshown",d);Reveal.addEventListener("paused",d);Reveal.addEventListener("resumed",d);d()}b()}if(!/receiver/i.test(window.location.search)){if(window.location.search.match(/(\?|\&)notes/gi)!==null){a()}Reveal.addKeyBinding({keyCode:83,key:"S",description:"Speaker notes view"},function(){a()})}return{open:a}})();